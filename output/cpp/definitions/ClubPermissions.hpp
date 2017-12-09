#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubPermissions_t {
    std::vector<std::string> MEMBER;
    std::vector<std::string> INVITEE;
    std::vector<std::string> ADMIN;
    std::vector<std::string> OFFICER;
    std::vector<std::string> UNKNOWN;
    std::vector<std::string> OWNER;
  };

  inline void to_json(nlohmann::json& j, const ClubPermissions_t& v) {
    j["MEMBER"] = v.MEMBER;
    j["INVITEE"] = v.INVITEE;
    j["ADMIN"] = v.ADMIN;
    j["OFFICER"] = v.OFFICER;
    j["UNKNOWN"] = v.UNKNOWN;
    j["OWNER"] = v.OWNER;
  }

  inline void from_json(const nlohmann::json& j, ClubPermissions_t& v) {
    v.MEMBER = j.at("MEMBER").get<std::vector<std::string>>();
    v.INVITEE = j.at("INVITEE").get<std::vector<std::string>>();
    v.ADMIN = j.at("ADMIN").get<std::vector<std::string>>();
    v.OFFICER = j.at("OFFICER").get<std::vector<std::string>>();
    v.UNKNOWN = j.at("UNKNOWN").get<std::vector<std::string>>();
    v.OWNER = j.at("OWNER").get<std::vector<std::string>>();
  }
  inline std::string to_string(const ClubPermissions_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
