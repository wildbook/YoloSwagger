#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionChroma_t {
    std::string chromaPath;
    int32_t id;
    std::vector<std::string> colors;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionChroma_t& v) {
    j["chromaPath"] = v.chromaPath;
    j["id"] = v.id;
    j["colors"] = v.colors;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionChroma_t& v) {
    v.chromaPath = j.at("chromaPath").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
  }
}
