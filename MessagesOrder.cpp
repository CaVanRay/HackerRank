/*************************************************************
 * Date: 09/09/2026
 * Title: Messages Order
 * Author: Cavan Ray Theiss
 * 
 * Description:
 * The task is to implement classes Message and MessageFactory
 * 
 * Class Message is required to store a text value of type 
 * std::string and provide a public getter const string& 
 * get_text() which is expected to return this text value.
 *
 * Class MessageFactory is required to have an empty 
 * constructor, and implement a method Message 
 * create_message(const string& text) that is expected to 
 * return a Message object storing the value of text 
 * argument.
 * 
 *************************************************************/

// PROVIDED CODE BELOW

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//*************************************************************
// MY CODE STARTS HERE
//*************************************************************

class Message {
public: 
    Message() {}
    const string& get_text() {
        
    }
};

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        
    }
};


//*************************************************************
// MY CODE STOPS HERE
//*************************************************************

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
