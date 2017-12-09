#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipNoficationsDto_t {
    std::string status;
    std::string action;
    std::string clubKey;
    std::string role;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const MembershipNoficationsDto_t& v) {
    j["status"] = v.status;
    j["action"] = v.action;
    j["clubKey"] = v.clubKey;
    j["role"] = v.role;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, MembershipNoficationsDto_t& v) {
    v.status = j.at("status").get<std::string>();
    v.action = j.at("action").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const MembershipNoficationsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
