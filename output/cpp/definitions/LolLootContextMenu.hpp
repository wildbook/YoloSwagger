#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    int32_t essenceQuantity;
    std::string name;
    std::string requiredOthers;
    std::string requiredTokens;
    std::string requiredOthersName;
    int32_t requiredOthersCount;
    bool enabled;
    std::string actionType;
    std::string essenceType;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["essenceQuantity"] = v.essenceQuantity;
    j["name"] = v.name;
    j["requiredOthers"] = v.requiredOthers;
    j["requiredTokens"] = v.requiredTokens;
    j["requiredOthersName"] = v.requiredOthersName;
    j["requiredOthersCount"] = v.requiredOthersCount;
    j["enabled"] = v.enabled;
    j["actionType"] = v.actionType;
    j["essenceType"] = v.essenceType;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
    v.enabled = j.at("enabled").get<bool>();
    v.actionType = j.at("actionType").get<std::string>();
    v.essenceType = j.at("essenceType").get<std::string>();
  }
}
