#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    std::string requiredTokens;
    std::string requiredOthers;
    std::string essenceType;
    int32_t requiredOthersCount;
    bool enabled;
    std::string requiredOthersName;
    std::string actionType;
    int32_t essenceQuantity;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["requiredTokens"] = v.requiredTokens;
    j["requiredOthers"] = v.requiredOthers;
    j["essenceType"] = v.essenceType;
    j["requiredOthersCount"] = v.requiredOthersCount;
    j["enabled"] = v.enabled;
    j["requiredOthersName"] = v.requiredOthersName;
    j["actionType"] = v.actionType;
    j["essenceQuantity"] = v.essenceQuantity;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.essenceType = j.at("essenceType").get<std::string>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
    v.enabled = j.at("enabled").get<bool>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
    v.actionType = j.at("actionType").get<std::string>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolLootContextMenu_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
