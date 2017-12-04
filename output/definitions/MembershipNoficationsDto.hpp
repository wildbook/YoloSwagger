#ifndef SWAGGER_TYPES_MembershipNoficationsDto_HPP
#define SWAGGER_TYPES_MembershipNoficationsDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct MembershipNoficationsDto {
    // 
    std::string action;
    // 
    std::string clubKey;
    // 
    std::string name;
    // 
    std::string role;
    // 
    std::string status;
  };

  void to_json(nlohmann::json& j, const MembershipNoficationsDto& v) {
    j["action"] = v.action;
    j["clubKey"] = v.clubKey;
    j["name"] = v.name;
    j["role"] = v.role;
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, MembershipNoficationsDto& v) {
    v.action = j.at("action").get<std::string>;
    v.clubKey = j.at("clubKey").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.role = j.at("role").get<std::string>;
    v.status = j.at("status").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MembershipNoficationsDto_HPP
