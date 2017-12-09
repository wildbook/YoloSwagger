#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootDescription_t {
    std::string lootName;
    std::map<std::string, std::string> localizationMap;
    std::vector<std::string> childLootTableNames;
    std::map<std::string, std::string> localizationLongDescriptionMap;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootDescription_t& v) {
    j["lootName"] = v.lootName;
    j["localizationMap"] = v.localizationMap;
    j["childLootTableNames"] = v.childLootTableNames;
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootDescription_t& v) {
    v.lootName = j.at("lootName").get<std::string>();
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>();
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>();
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>();
  }
  inline std::string to_string(const LolLootLootDescription_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
