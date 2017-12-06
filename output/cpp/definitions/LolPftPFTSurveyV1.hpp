#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPftPFTSurveyV1_t {
    std::string url;
    std::string title;
    std::string caption;
    uint64_t id;
    std::string type;
  };

  inline void to_json(nlohmann::json& j, const LolPftPFTSurveyV1_t& v) {
    j["url"] = v.url;
    j["title"] = v.title;
    j["caption"] = v.caption;
    j["id"] = v.id;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, LolPftPFTSurveyV1_t& v) {
    v.url = j.at("url").get<std::string>();
    v.title = j.at("title").get<std::string>();
    v.caption = j.at("caption").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.type = j.at("type").get<std::string>();
  }
}
