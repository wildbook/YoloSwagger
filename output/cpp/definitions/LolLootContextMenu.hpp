#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    std::string actionType;
    bool enabled;
    int32_t essenceQuantity;
    std::string essenceType;
    std::string name;
    std::string requiredOthers;
    int32_t requiredOthersCount;
    std::string requiredOthersName;
    std::string requiredTokens;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["actionType"] = v.actionType;
    j["enabled"] = v.enabled;
    j["essenceQuantity"] = v.essenceQuantity;
    j["essenceType"] = v.essenceType;
    j["name"] = v.name;
    j["requiredOthers"] = v.requiredOthers;
    j["requiredOthersCount"] = v.requiredOthersCount;
    j["requiredOthersName"] = v.requiredOthersName;
    j["requiredTokens"] = v.requiredTokens;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.actionType = j.at("actionType").get<std::string>();
    v.enabled = j.at("enabled").get<bool>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.essenceType = j.at("essenceType").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
  }
}
