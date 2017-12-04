#ifndef SWAGGER_TYPES_ClubMOTD_HPP
#define SWAGGER_TYPES_ClubMOTD_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ClubMOTD {
    // 
    std::string motd;
  };

  inline void to_json(nlohmann::json& j, const ClubMOTD& v) {
    j["motd"] = v.motd;
  }

  inline void from_json(const nlohmann::json& j, ClubMOTD& v) {
    v.motd = j.at("motd").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubMOTD_HPP
