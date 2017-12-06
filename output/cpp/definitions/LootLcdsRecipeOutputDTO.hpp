#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeOutputDTO_t {
    bool allowDuplicates;
    std::string lootName;
    double probability;
    std::string quantityExpression;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeOutputDTO_t& v) {
    j["allowDuplicates"] = v.allowDuplicates;
    j["lootName"] = v.lootName;
    j["probability"] = v.probability;
    j["quantityExpression"] = v.quantityExpression;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeOutputDTO_t& v) {
    v.allowDuplicates = j.at("allowDuplicates").get<bool>();
    v.lootName = j.at("lootName").get<std::string>();
    v.probability = j.at("probability").get<double>();
    v.quantityExpression = j.at("quantityExpression").get<std::string>();
  }
}
