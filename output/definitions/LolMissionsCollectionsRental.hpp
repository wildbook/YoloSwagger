#ifndef SWAGGER_TYPES_LolMissionsCollectionsRental_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsRental_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMissionsCollectionsRental {
    // 
    bool rented;
  };

  inline void to_json(nlohmann::json& j, const LolMissionsCollectionsRental& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolMissionsCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsRental_HPP
