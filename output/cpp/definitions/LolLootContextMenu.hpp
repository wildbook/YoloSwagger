#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    bool enabled;
    std::string name;
    std::string requiredOthers;
    std::string requiredTokens;
    int32_t essenceQuantity;
    std::string requiredOthersName;
    std::string essenceType;
    std::string actionType;
    int32_t requiredOthersCount;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["enabled"] = v.enabled;
    j["name"] = v.name;
    j["requiredOthers"] = v.requiredOthers;
    j["requiredTokens"] = v.requiredTokens;
    j["essenceQuantity"] = v.essenceQuantity;
    j["requiredOthersName"] = v.requiredOthersName;
    j["essenceType"] = v.essenceType;
    j["actionType"] = v.actionType;
    j["requiredOthersCount"] = v.requiredOthersCount;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
    v.essenceType = j.at("essenceType").get<std::string>();
    v.actionType = j.at("actionType").get<std::string>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
  }
  inline std::string to_string(const LolLootContextMenu_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
