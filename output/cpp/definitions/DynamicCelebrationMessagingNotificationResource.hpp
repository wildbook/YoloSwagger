#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DynamicCelebrationMessagingNotificationResource_t {
    std::string_t itemId;
    int32_t_t status;
    std::string_t celebrationBody;
    std::string_t msgId;
    std::string_t celebrationType;
    std::string_t itemQuantity;
    std::string_t inventoryType;
    std::string_t celebrationMessage;
    int32_t_t id;
    std::string_t celebrationTitle;
  };

  inline void to_json(nlohmann::json& j, const DynamicCelebrationMessagingNotificationResource_t& v) {
    j["itemId"] = v.itemId;
    j["status"] = v.status;
    j["celebrationBody"] = v.celebrationBody;
    j["msgId"] = v.msgId;
    j["celebrationType"] = v.celebrationType;
    j["itemQuantity"] = v.itemQuantity;
    j["inventoryType"] = v.inventoryType;
    j["celebrationMessage"] = v.celebrationMessage;
    j["id"] = v.id;
    j["celebrationTitle"] = v.celebrationTitle;
  }

  inline void from_json(const nlohmann::json& j, DynamicCelebrationMessagingNotificationResource_t& v) {
    v.itemId = j.at("itemId").get<std::string_t>();
    v.status = j.at("status").get<int32_t_t>();
    v.celebrationBody = j.at("celebrationBody").get<std::string_t>();
    v.msgId = j.at("msgId").get<std::string_t>();
    v.celebrationType = j.at("celebrationType").get<std::string_t>();
    v.itemQuantity = j.at("itemQuantity").get<std::string_t>();
    v.inventoryType = j.at("inventoryType").get<std::string_t>();
    v.celebrationMessage = j.at("celebrationMessage").get<std::string_t>();
    v.id = j.at("id").get<int32_t_t>();
    v.celebrationTitle = j.at("celebrationTitle").get<std::string_t>();
  }
  inline std::string to_string(const DynamicCelebrationMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
