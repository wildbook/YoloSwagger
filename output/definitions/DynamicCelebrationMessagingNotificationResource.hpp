#ifndef SWAGGER_TYPES_DynamicCelebrationMessagingNotificationResource_HPP
#define SWAGGER_TYPES_DynamicCelebrationMessagingNotificationResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct DynamicCelebrationMessagingNotificationResource {
    // 
    std::string celebrationBody;
    // 
    std::string celebrationMessage;
    // 
    std::string celebrationTitle;
    // 
    std::string celebrationType;
    // 
    int32_t id;
    // 
    std::string inventoryType;
    // 
    std::string itemId;
    // 
    std::string itemQuantity;
    // 
    std::string msgId;
    // 
    int32_t status;
  };

  inline void to_json(nlohmann::json& j, const DynamicCelebrationMessagingNotificationResource& v) {
    j["celebrationBody"] = v.celebrationBody;
    j["celebrationMessage"] = v.celebrationMessage;
    j["celebrationTitle"] = v.celebrationTitle;
    j["celebrationType"] = v.celebrationType;
    j["id"] = v.id;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["itemQuantity"] = v.itemQuantity;
    j["msgId"] = v.msgId;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, DynamicCelebrationMessagingNotificationResource& v) {
    v.celebrationBody = j.at("celebrationBody").get<std::string>;
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>;
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>;
    v.celebrationType = j.at("celebrationType").get<std::string>;
    v.id = j.at("id").get<int32_t>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<std::string>;
    v.itemQuantity = j.at("itemQuantity").get<std::string>;
    v.msgId = j.at("msgId").get<std::string>;
    v.status = j.at("status").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_DynamicCelebrationMessagingNotificationResource_HPP
