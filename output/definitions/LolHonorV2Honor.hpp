#ifndef SWAGGER_TYPES_LolHonorV2Honor_HPP
#define SWAGGER_TYPES_LolHonorV2Honor_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolHonorV2Honor {
'    // 
    std::string honorCategory;
    // 
    std::string voterRelationship;
  };

  void to_json(nlohmann::json& j, const LolHonorV2Honor& v) {
    j["honorCategory"] = v.honorCategory;
    j["voterRelationship"] = v.voterRelationship;
  }

  void from_json(const nlohmann::json& j, LolHonorV2Honor& v) {
    v.honorCategory = j.at("honorCategory").get<std::string>;
    v.voterRelationship = j.at("voterRelationship").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2Honor_HPP
