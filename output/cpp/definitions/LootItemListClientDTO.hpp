#ifndef SWAGGER_TYPES_LootItemListClientDTO_HPP
#define SWAGGER_TYPES_LootItemListClientDTO_HPP
#include <json.hpp>
#include "LootItemClientDTO.hpp"
namespace leagueapi {
  // 
  struct LootItemListClientDTO {
    // 
    int64_t lastUpdate;
    // 
    std::vector<LootItemClientDTO> lootItems;
  };

  inline void to_json(nlohmann::json& j, const LootItemListClientDTO& v) {
    j["lastUpdate"] = v.lastUpdate;
    j["lootItems"] = v.lootItems;
  }

  inline void from_json(const nlohmann::json& j, LootItemListClientDTO& v) {
    v.lastUpdate = j.at("lastUpdate").get<int64_t>;
    v.lootItems = j.at("lootItems").get<std::vector<LootItemClientDTO>>;
  }

}
#endif // SWAGGER_TYPES_LootItemListClientDTO_HPP