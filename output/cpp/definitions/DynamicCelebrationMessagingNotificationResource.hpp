#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DynamicCelebrationMessagingNotificationResource_t {
    std::string celebrationType;
    std::string itemId;
    std::string msgId;
    std::string itemQuantity;
    std::string celebrationMessage;
    int32_t id;
    std::string inventoryType;
    int32_t status;
    std::string celebrationTitle;
    std::string celebrationBody;
  };

  inline void to_json(nlohmann::json& j, const DynamicCelebrationMessagingNotificationResource_t& v) {
    j["celebrationType"] = v.celebrationType;
    j["itemId"] = v.itemId;
    j["msgId"] = v.msgId;
    j["itemQuantity"] = v.itemQuantity;
    j["celebrationMessage"] = v.celebrationMessage;
    j["id"] = v.id;
    j["inventoryType"] = v.inventoryType;
    j["status"] = v.status;
    j["celebrationTitle"] = v.celebrationTitle;
    j["celebrationBody"] = v.celebrationBody;
  }

  inline void from_json(const nlohmann::json& j, DynamicCelebrationMessagingNotificationResource_t& v) {
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.itemQuantity = j.at("itemQuantity").get<std::string>();
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.status = j.at("status").get<int32_t>();
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>();
    v.celebrationBody = j.at("celebrationBody").get<std::string>();
  }
  inline std::string to_string(const DynamicCelebrationMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
