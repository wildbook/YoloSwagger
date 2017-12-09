#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    std::string actionType;
    int32_t requiredOthersCount;
    std::string essenceType;
    bool enabled;
    std::string requiredTokens;
    int32_t essenceQuantity;
    std::string name;
    std::string requiredOthers;
    std::string requiredOthersName;
  };

  inline void to_json(nlohmann::json& j, const LolLootContextMenu_t& v) {
    j["actionType"] = v.actionType;
    j["requiredOthersCount"] = v.requiredOthersCount;
    j["essenceType"] = v.essenceType;
    j["enabled"] = v.enabled;
    j["requiredTokens"] = v.requiredTokens;
    j["essenceQuantity"] = v.essenceQuantity;
    j["name"] = v.name;
    j["requiredOthers"] = v.requiredOthers;
    j["requiredOthersName"] = v.requiredOthersName;
  }

  inline void from_json(const nlohmann::json& j, LolLootContextMenu_t& v) {
    v.actionType = j.at("actionType").get<std::string>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t>();
    v.essenceType = j.at("essenceType").get<std::string>();
    v.enabled = j.at("enabled").get<bool>();
    v.requiredTokens = j.at("requiredTokens").get<std::string>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.requiredOthers = j.at("requiredOthers").get<std::string>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string>();
  }
  inline std::string to_string(const LolLootContextMenu_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
