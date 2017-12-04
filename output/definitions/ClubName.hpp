#ifndef SWAGGER_TYPES_ClubName_HPP
#define SWAGGER_TYPES_ClubName_HPP
#include <json.hpp>
namespace test {
  // 
  struct ClubName {
'    // 
    std::string name;
  };

  void to_json(nlohmann::json& j, const ClubName& v) {
    j["name"] = v.name;
  }

  void from_json(const nlohmann::json& j, ClubName& v) {
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubName_HPP
