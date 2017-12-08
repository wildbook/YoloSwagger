#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootContextMenu_t {
    std::string_t requiredTokens;
    std::string_t requiredOthers;
    std::string_t essenceType;
    int32_t_t requiredOthersCount;
    bool_t enabled;
    std::string_t requiredOthersName;
    std::string_t actionType;
    int32_t_t essenceQuantity;
    std::string_t name;
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
    v.requiredTokens = j.at("requiredTokens").get<std::string_t>();
    v.requiredOthers = j.at("requiredOthers").get<std::string_t>();
    v.essenceType = j.at("essenceType").get<std::string_t>();
    v.requiredOthersCount = j.at("requiredOthersCount").get<int32_t_t>();
    v.enabled = j.at("enabled").get<bool_t>();
    v.requiredOthersName = j.at("requiredOthersName").get<std::string_t>();
    v.actionType = j.at("actionType").get<std::string_t>();
    v.essenceQuantity = j.at("essenceQuantity").get<int32_t_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolLootContextMenu_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
