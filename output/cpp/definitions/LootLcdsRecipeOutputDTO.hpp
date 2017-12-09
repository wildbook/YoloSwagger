#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeOutputDTO_t {
    std::string quantityExpression;
    double probability;
    bool allowDuplicates;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeOutputDTO_t& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["probability"] = v.probability;
    j["allowDuplicates"] = v.allowDuplicates;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeOutputDTO_t& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>();
    v.probability = j.at("probability").get<double>();
    v.allowDuplicates = j.at("allowDuplicates").get<bool>();
    v.lootName = j.at("lootName").get<std::string>();
  }
  inline std::string to_string(const LootLcdsRecipeOutputDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
