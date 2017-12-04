#ifndef SWAGGER_TYPES_ClubTag_HPP
#define SWAGGER_TYPES_ClubTag_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubTag {
    // 
    std::string tag;
  };

  inline void to_json(nlohmann::json& j, const ClubTag& v) {
    j["tag"] = v.tag;
  }

  inline void from_json(const nlohmann::json& j, ClubTag& v) {
    v.tag = j.at("tag").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubTag_HPP
