#ifndef SWAGGER_TYPES_ClubPermissions_HPP
#define SWAGGER_TYPES_ClubPermissions_HPP
#include <json.hpp>
namespace test {
  // 
  struct ClubPermissions {
'    // 
    std::vector<std::string> ADMIN;
    // 
    std::vector<std::string> INVITEE;
    // 
    std::vector<std::string> MEMBER;
    // 
    std::vector<std::string> OFFICER;
    // 
    std::vector<std::string> OWNER;
    // 
    std::vector<std::string> UNKNOWN;
  };

  void to_json(nlohmann::json& j, const ClubPermissions& v) {
    j["ADMIN"] = v.ADMIN;
    j["INVITEE"] = v.INVITEE;
    j["MEMBER"] = v.MEMBER;
    j["OFFICER"] = v.OFFICER;
    j["OWNER"] = v.OWNER;
    j["UNKNOWN"] = v.UNKNOWN;
  }

  void from_json(const nlohmann::json& j, ClubPermissions& v) {
    v.ADMIN = j.at("ADMIN").get<std::vector<std::string>>;
    v.INVITEE = j.at("INVITEE").get<std::vector<std::string>>;
    v.MEMBER = j.at("MEMBER").get<std::vector<std::string>>;
    v.OFFICER = j.at("OFFICER").get<std::vector<std::string>>;
    v.OWNER = j.at("OWNER").get<std::vector<std::string>>;
    v.UNKNOWN = j.at("UNKNOWN").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_ClubPermissions_HPP
