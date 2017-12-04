#ifndef SWAGGER_TYPES_Club_HPP
#define SWAGGER_TYPES_Club_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct Club {
    // 
    std::string key;
    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const Club& v) {
    j["key"] = v.key;
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, Club& v) {
    v.key = j.at("key").get<std::string>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_Club_HPP
