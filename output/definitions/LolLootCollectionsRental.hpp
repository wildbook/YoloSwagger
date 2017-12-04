#ifndef SWAGGER_TYPES_LolLootCollectionsRental_HPP
#define SWAGGER_TYPES_LolLootCollectionsRental_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootCollectionsRental {
    // 
    bool rented;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsRental& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsRental_HPP
