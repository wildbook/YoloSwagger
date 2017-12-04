#ifndef SWAGGER_TYPES_ClubMOTD_HPP
#define SWAGGER_TYPES_ClubMOTD_HPP
#include <json.hpp>
namespace test {
  // 
  struct ClubMOTD {
'    // 
    std::string motd;
  };

  void to_json(nlohmann::json& j, const ClubMOTD& v) {
    j["motd"] = v.motd;
  }

  void from_json(const nlohmann::json& j, ClubMOTD& v) {
    v.motd = j.at("motd").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ClubMOTD_HPP
