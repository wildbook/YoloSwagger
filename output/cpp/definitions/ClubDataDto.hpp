#pragma once
#include <json.hpp>
#include <optional>
#include "ClubPermissions.hpp"
namespace leagueapi {
  struct ClubDataDto_t {
    ClubPermissions_t permissionMap;
    std::string_t jid;
    std::string_t motd;
    std::string_t clubKey;
    int64_t_t createdTs;
    int64_t_t lastModifiedTs;
    std::string_t name;
    std::string_t tag;
    std::string_t role;
    std::string_t description;
  };

  inline void to_json(nlohmann::json& j, const ClubDataDto_t& v) {
    j["permissionMap"] = v.permissionMap;
    j["jid"] = v.jid;
    j["motd"] = v.motd;
    j["clubKey"] = v.clubKey;
    j["createdTs"] = v.createdTs;
    j["lastModifiedTs"] = v.lastModifiedTs;
    j["name"] = v.name;
    j["tag"] = v.tag;
    j["role"] = v.role;
    j["description"] = v.description;
  }

  inline void from_json(const nlohmann::json& j, ClubDataDto_t& v) {
    v.permissionMap = j.at("permissionMap").get<ClubPermissions_t>();
    v.jid = j.at("jid").get<std::string_t>();
    v.motd = j.at("motd").get<std::string_t>();
    v.clubKey = j.at("clubKey").get<std::string_t>();
    v.createdTs = j.at("createdTs").get<int64_t_t>();
    v.lastModifiedTs = j.at("lastModifiedTs").get<int64_t_t>();
    v.name = j.at("name").get<std::string_t>();
    v.tag = j.at("tag").get<std::string_t>();
    v.role = j.at("role").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
  }
  inline std::string to_string(const ClubDataDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
