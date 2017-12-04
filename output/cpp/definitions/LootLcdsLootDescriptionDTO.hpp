#ifndef SWAGGER_TYPES_LootLcdsLootDescriptionDTO_HPP
#define SWAGGER_TYPES_LootLcdsLootDescriptionDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootLcdsLootDescriptionDTO {
    // 
    std::map<std::string, std::string> localizationMap;
    // 
    std::map<std::string, std::string> localizationLongDescriptionMap;
    // 
    std::string lootName;
    // 
    std::vector<std::string> childLootTableNames;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsLootDescriptionDTO& v) {
    j["localizationMap"] = v.localizationMap;
    j["localizationLongDescriptionMap"] = v.localizationLongDescriptionMap;
    j["lootName"] = v.lootName;
    j["childLootTableNames"] = v.childLootTableNames;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsLootDescriptionDTO& v) {
    v.localizationMap = j.at("localizationMap").get<std::map<std::string, std::string>>;
    v.localizationLongDescriptionMap = j.at("localizationLongDescriptionMap").get<std::map<std::string, std::string>>;
    v.lootName = j.at("lootName").get<std::string>;
    v.childLootTableNames = j.at("childLootTableNames").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsLootDescriptionDTO_HPP
