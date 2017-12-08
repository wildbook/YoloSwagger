#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
#include "ClubMember.hpp"
#include "ClubRole.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  struct PlayerClub_t {
    bool_t isClubTagEligible;
    std::string_t motd;
    std::string_t description;
    int64_t_t created;
    int64_t_t lastModified;
    std::string_t jid;
    bool_t primary;
    ClubMemberLists_t members;
    std::string_t tag;
    ClubRole_t role;
    std::string_t key;
    ClubMember_t owner;
    ClubPermissions_t permissions;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub_t& v) {
    j["isClubTagEligible"] = v.isClubTagEligible;
    j["motd"] = v.motd;
    j["description"] = v.description;
    j["created"] = v.created;
    j["lastModified"] = v.lastModified;
    j["jid"] = v.jid;
    j["primary"] = v.primary;
    j["members"] = v.members;
    j["tag"] = v.tag;
    j["role"] = v.role;
    j["key"] = v.key;
    j["owner"] = v.owner;
    j["permissions"] = v.permissions;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, PlayerClub_t& v) {
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool_t>();
    v.motd = j.at("motd").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.created = j.at("created").get<int64_t_t>();
    v.lastModified = j.at("lastModified").get<int64_t_t>();
    v.jid = j.at("jid").get<std::string_t>();
    v.primary = j.at("primary").get<bool_t>();
    v.members = j.at("members").get<ClubMemberLists_t>();
    v.tag = j.at("tag").get<std::string_t>();
    v.role = j.at("role").get<ClubRole_t>();
    v.key = j.at("key").get<std::string_t>();
    v.owner = j.at("owner").get<ClubMember_t>();
    v.permissions = j.at("permissions").get<ClubPermissions_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const PlayerClub_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
