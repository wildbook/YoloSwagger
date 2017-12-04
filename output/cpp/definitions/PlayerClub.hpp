#ifndef SWAGGER_TYPES_PlayerClub_HPP
#define SWAGGER_TYPES_PlayerClub_HPP
#include <json.hpp>
#include "ClubPermissions.hpp"
#include "ClubMember.hpp"
#include "ClubRole.hpp"
#include "ClubMemberLists.hpp"
namespace leagueapi {
  // 
  struct PlayerClub {
    // 
    bool isClubTagEligible;
    // 
    std::string motd;
    // 
    std::string description;
    // 
    int64_t created;
    // 
    int64_t lastModified;
    // 
    std::string jid;
    // 
    bool primary;
    // 
    ClubMemberLists members;
    // 
    std::string tag;
    // 
    ClubRole role;
    // 
    std::string key;
    // 
    ClubMember owner;
    // 
    ClubPermissions permissions;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const PlayerClub& v) {
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

  inline void from_json(const nlohmann::json& j, PlayerClub& v) {
    v.isClubTagEligible = j.at("isClubTagEligible").get<bool>;
    v.motd = j.at("motd").get<std::string>;
    v.description = j.at("description").get<std::string>;
    v.created = j.at("created").get<int64_t>;
    v.lastModified = j.at("lastModified").get<int64_t>;
    v.jid = j.at("jid").get<std::string>;
    v.primary = j.at("primary").get<bool>;
    v.members = j.at("members").get<ClubMemberLists>;
    v.tag = j.at("tag").get<std::string>;
    v.role = j.at("role").get<ClubRole>;
    v.key = j.at("key").get<std::string>;
    v.owner = j.at("owner").get<ClubMember>;
    v.permissions = j.at("permissions").get<ClubPermissions>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PlayerClub_HPP
