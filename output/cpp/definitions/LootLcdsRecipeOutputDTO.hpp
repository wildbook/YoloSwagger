#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeOutputDTO_t {
    std::string_t quantityExpression;
    std::string_t lootName;
    double_t probability;
    bool_t allowDuplicates;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeOutputDTO_t& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["lootName"] = v.lootName;
    j["probability"] = v.probability;
    j["allowDuplicates"] = v.allowDuplicates;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeOutputDTO_t& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string_t>();
    v.lootName = j.at("lootName").get<std::string_t>();
    v.probability = j.at("probability").get<double_t>();
    v.allowDuplicates = j.at("allowDuplicates").get<bool_t>();
  }
  inline std::string to_string(const LootLcdsRecipeOutputDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
