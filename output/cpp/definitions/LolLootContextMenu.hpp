#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    int32_t requiredOthersCount;
    std::string requiredOthersName;
    int32_t essenceQuantity;
    bool enabled;
    std::string essenceType;
    std::string requiredOthers;
    std::string requiredTokens;
    std::string name;
    std::string actionType;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["requiredOthersCount"] = v.requiredOthersCount;
    j["requiredOthersName"] = v.requiredOthersName;
    j["essenceQuantity"] = v.essenceQuantity;
    j["enabled"] = v.enabled;
    j["essenceType"] = v.essenceType;
    j["requiredOthers"] = v.requiredOthers;
    j["requiredTokens"] = v.requiredTokens;
    j["name"] = v.name;
    j["actionType"] = v.actionType;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.enabled = j.at("enabled").get<bool>();
    v.essenceType = j.at("essenceType").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.actionType = j.at("actionType").get<std::string>();
  }
  inline std::string to_string(const LolLootContextMenu_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
