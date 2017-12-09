#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRune.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRunePage_t {
    std::string name;
    bool current;
    std::vector<LolCollectionsCollectionsRune_t> runes;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage_t& v) {
    j["name"] = v.name;
    j["current"] = v.current;
    j["runes"] = v.runes;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage_t& v) {
    v.name = j.at("name").get<std::string>();
    v.current = j.at("current").get<bool>();
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune_t>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
