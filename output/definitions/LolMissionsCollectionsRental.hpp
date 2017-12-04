#ifndef SWAGGER_TYPES_LolMissionsCollectionsRental_HPP
#define SWAGGER_TYPES_LolMissionsCollectionsRental_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolMissionsCollectionsRental {
'    // 
    bool rented;
  };

  void to_json(nlohmann::json& j, const LolMissionsCollectionsRental& v) {
    j["rented"] = v.rented;
  }

  void from_json(const nlohmann::json& j, LolMissionsCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsCollectionsRental_HPP
