#include "hash_list.h"

hash_list::hash_list() {}

/**-----------------------------------------------------------------------------------
 * START Part 1
 *------------------------------------------------------------------------------------*/

void hash_list::insert(int key, float value) {}

std::optional<float> hash_list::get_value(int key) const { return std::nullopt; }

bool hash_list::remove(int key) { 
    node* current = head;
    if(!head)
    {
        return false;
    }
    if (head->value == key)
    {
        node* exnode = head;
        head = head->next;
        delete exnode;
        size--;
        return true;
    }
    while (current->next != nullptr)
    {
        if (current->next->value == key)
        {
            node* exnode = current->next;
            current->next = current->next->next;
            delete exnode;
            size--;
            return true;
        }
        current = current->next;
    };
    return false; }

size_t hash_list::get_size() const { 
    if (!head)
    {
    return 0;
    }
    return size;
      }

hash_list::~hash_list() {
    node* current = head;
    if(head)
    {
        while (current->next != nullptr)
        {
            node* exnode = current;
            current = current->next;
            delete exnode;
        }
        delete current;
    }
    head = nullptr;
    size = 0;
}

/**-----------------------------------------------------------------------------------
 * END Part 1
 *------------------------------------------------------------------------------------*/


/**-----------------------------------------------------------------------------------
 * START Part 2
 *------------------------------------------------------------------------------------*/

hash_list::hash_list(const hash_list &other) {}

hash_list &hash_list::operator=(const hash_list &other) { return *this; }

void hash_list::reset_iter() {}


void hash_list::increment_iter() {}


std::optional<std::pair<const int *, float *>> hash_list::get_iter_value() { return std::nullopt; }


bool hash_list::iter_at_end() { return false; }
/**-----------------------------------------------------------------------------------
 * END Part 2
 *------------------------------------------------------------------------------------*/
