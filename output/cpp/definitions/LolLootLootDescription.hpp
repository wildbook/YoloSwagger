#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootDescription_t {
    std::vector<std::string> childLootTableNames;
    std::map<std::string, std::string> localizationMap;
    std::map<std::string, std::string> localizationLongDescriptionMap;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootDescription_t& v) {
    j["childLootTableNames"] = v.childLootTableNames;
    j["localizationMap"] = v.localizationMap;
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootDescription_t& v) {
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>();
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>();
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>();
    v.lootName = j.at("lootName").get<std::string>();
  }
}
