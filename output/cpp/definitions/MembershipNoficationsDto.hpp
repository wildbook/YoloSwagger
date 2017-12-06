#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipNoficationsDto_t {
    std::string status;
    std::string role;
    std::string name;
    std::string clubKey;
    std::string action;
  };

  inline void to_json(nlohmann::json& j, const MembershipNoficationsDto_t& v) {
    j["status"] = v.status;
    j["role"] = v.role;
    j["name"] = v.name;
    j["clubKey"] = v.clubKey;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, MembershipNoficationsDto_t& v) {
    v.status = j.at("status").get<std::string>();
    v.role = j.at("role").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.clubKey = j.at("clubKey").get<std::string>();
    v.action = j.at("action").get<std::string>();
  }
}
