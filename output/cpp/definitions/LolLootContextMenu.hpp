#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    std::string requiredOthersName;
    std::string actionType;
    int32_t requiredOthersCount;
    std::string requiredTokens;
    bool enabled;
    std::string name;
    std::string requiredOthers;
    int32_t essenceQuantity;
    std::string essenceType;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["requiredOthersName"] = v.requiredOthersName;
    j["actionType"] = v.actionType;
    j["requiredOthersCount"] = v.requiredOthersCount;
    j["requiredTokens"] = v.requiredTokens;
    j["enabled"] = v.enabled;
    j["name"] = v.name;
    j["requiredOthers"] = v.requiredOthers;
    j["essenceQuantity"] = v.essenceQuantity;
    j["essenceType"] = v.essenceType;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
    v.actionType = j.at("actionType").get<std::string>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
    v.enabled = j.at("enabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.essenceType = j.at("essenceType").get<std::string>();
  }
  inline std::string to_string(const LolLootContextMenu_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
