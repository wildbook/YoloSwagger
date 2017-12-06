#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeOutputDTO_t {
    std::string quantityExpression;
    bool allowDuplicates;
    double probability;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeOutputDTO_t& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["allowDuplicates"] = v.allowDuplicates;
    j["probability"] = v.probability;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeOutputDTO_t& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>();
    v.allowDuplicates = j.at("allowDuplicates").get<bool>();
    v.probability = j.at("probability").get<double>();
    v.lootName = j.at("lootName").get<std::string>();
  }
}
