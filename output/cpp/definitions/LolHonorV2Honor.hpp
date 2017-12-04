#ifndef SWAGGER_TYPES_LolHonorV2Honor_HPP
#define SWAGGER_TYPES_LolHonorV2Honor_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2Honor {
    // 
    std::string voterRelationship;
    // 
    std::string honorCategory;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Honor& v) {
    j["voterRelationship"] = v.voterRelationship;
    j["honorCategory"] = v.honorCategory;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Honor& v) {
    v.voterRelationship = j.at("voterRelationship").get<std::string>;
    v.honorCategory = j.at("honorCategory").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2Honor_HPP
