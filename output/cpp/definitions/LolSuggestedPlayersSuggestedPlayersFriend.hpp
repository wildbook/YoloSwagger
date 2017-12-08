#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersFriend_t {
    std::string_t availability;
    std::string_t name;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    j["availability"] = v.availability;
    j["name"] = v.name;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    v.availability = j.at("availability").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersFriend_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
