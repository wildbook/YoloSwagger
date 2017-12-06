#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DynamicCelebrationMessagingNotificationResource_t {
    std::string itemQuantity;
    std::string celebrationTitle;
    int32_t id;
    std::string celebrationType;
    std::string celebrationBody;
    std::string itemId;
    std::string msgId;
    std::string inventoryType;
    std::string celebrationMessage;
    int32_t status;
  };

  inline void to_json(nlohmann::json& j, const DynamicCelebrationMessagingNotificationResource_t& v) {
    j["itemQuantity"] = v.itemQuantity;
    j["celebrationTitle"] = v.celebrationTitle;
    j["id"] = v.id;
    j["celebrationType"] = v.celebrationType;
    j["celebrationBody"] = v.celebrationBody;
    j["itemId"] = v.itemId;
    j["msgId"] = v.msgId;
    j["inventoryType"] = v.inventoryType;
    j["celebrationMessage"] = v.celebrationMessage;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, DynamicCelebrationMessagingNotificationResource_t& v) {
    v.itemQuantity = j.at("itemQuantity").get<std::string>();
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.celebrationBody = j.at("celebrationBody").get<std::string>();
    v.itemId = j.at("itemId").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>();
    v.status = j.at("status").get<int32_t>();
  }
}
