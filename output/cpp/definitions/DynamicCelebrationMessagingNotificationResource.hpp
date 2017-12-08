#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DynamicCelebrationMessagingNotificationResource_t {
    int32_t status;
    int32_t id;
    std::string itemQuantity;
    std::string inventoryType;
    std::string itemId;
    std::string celebrationBody;
    std::string msgId;
    std::string celebrationType;
    std::string celebrationMessage;
    std::string celebrationTitle;
  };

  inline void to_json(nlohmann::json& j, const DynamicCelebrationMessagingNotificationResource_t& v) {
    j["status"] = v.status;
    j["id"] = v.id;
    j["itemQuantity"] = v.itemQuantity;
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["celebrationBody"] = v.celebrationBody;
    j["msgId"] = v.msgId;
    j["celebrationType"] = v.celebrationType;
    j["celebrationMessage"] = v.celebrationMessage;
    j["celebrationTitle"] = v.celebrationTitle;
  }

  inline void from_json(const nlohmann::json& j, DynamicCelebrationMessagingNotificationResource_t& v) {
    v.status = j.at("status").get<int32_t>();
    v.id = j.at("id").get<int32_t>();
    v.itemQuantity = j.at("itemQuantity").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
    v.celebrationBody = j.at("celebrationBody").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>();
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>();
  }
  inline std::string to_string(const DynamicCelebrationMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
