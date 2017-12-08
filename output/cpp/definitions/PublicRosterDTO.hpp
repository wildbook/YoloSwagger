#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PublicRosterDTO_t {
    int64_t id;
    std::string shortName;
    int32_t logoColor;
    int32_t logo;
    std::string name;
    std::vector<uint64_t> memberIds;
  };

  inline void to_json(nlohmann::json& j, const PublicRosterDTO_t& v) {
    j["id"] = v.id;
    j["shortName"] = v.shortName;
    j["logoColor"] = v.logoColor;
    j["logo"] = v.logo;
    j["name"] = v.name;
    j["memberIds"] = v.memberIds;
  }

  inline void from_json(const nlohmann::json& j, PublicRosterDTO_t& v) {
    v.id = j.at("id").get<int64_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const PublicRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
