#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MembershipNoficationsDto_t {
    std::string_t action;
    std::string_t status;
    std::string_t role;
    std::string_t name;
    std::string_t clubKey;
  };

  inline void to_json(nlohmann::json& j, const MembershipNoficationsDto_t& v) {
    j["action"] = v.action;
    j["status"] = v.status;
    j["role"] = v.role;
    j["name"] = v.name;
    j["clubKey"] = v.clubKey;
  }

  inline void from_json(const nlohmann::json& j, MembershipNoficationsDto_t& v) {
    v.action = j.at("action").get<std::string_t>();
    v.status = j.at("status").get<std::string_t>();
    v.role = j.at("role").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.clubKey = j.at("clubKey").get<std::string_t>();
  }
  inline std::string to_string(const MembershipNoficationsDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
