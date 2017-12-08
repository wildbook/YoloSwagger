#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsLootDescriptionDTO_t {
    std::map<std::string, std::string> localizationMap;
    std::map<std::string, std::string> localizationLongDescriptionMap;
    std::string_t lootName;
    std::vector<std::string> childLootTableNames;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsLootDescriptionDTO_t& v) {
    j["localizationMap"] = v.localizationMap;
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap;
    j["lootName"] = v.lootName;
    j["childLootTableNames"] = v.childLootTableNames;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsLootDescriptionDTO_t& v) {
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>();
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>();
    v.lootName = j.at("lootName").get<std::string_t>();
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LootLcdsLootDescriptionDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
