#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipNoficationsDto_t {
    std::string name;
    std::string role;
    std::string clubKey;
    std::string action;
    std::string status;
  };

  inline void to_json(nlohmann::json& j, const MembershipNoficationsDto_t& v) {
    j["name"] = v.name;
    j["role"] = v.role;
    j["clubKey"] = v.clubKey;
    j["action"] = v.action;
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, MembershipNoficationsDto_t& v) {
    v.name = j.at("name").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.action = j.at("action").get<std::string>();
    v.status = j.at("status").get<std::string>();
  }
  inline std::string to_string(const MembershipNoficationsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
