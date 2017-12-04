#ifndef SWAGGER_TYPES_LolPerksPlayerInventory_HPP
#define SWAGGER_TYPES_LolPerksPlayerInventory_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksPlayerInventory {
    // 
    uint32_t ownedPageCount;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPlayerInventory& v) {
    j["ownedPageCount"] = v.ownedPageCount;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPlayerInventory& v) {
    v.ownedPageCount = j.at("ownedPageCount").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPlayerInventory_HPP
