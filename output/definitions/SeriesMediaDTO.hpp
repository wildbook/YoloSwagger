#ifndef SWAGGER_TYPES_SeriesMediaDTO_HPP
#define SWAGGER_TYPES_SeriesMediaDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct SeriesMediaDTO {
    // 
    std::string backgroundUrl;
  };

  inline void to_json(nlohmann::json& j, const SeriesMediaDTO& v) {
    j["backgroundUrl"] = v.backgroundUrl;
  }

  inline void from_json(const nlohmann::json& j, SeriesMediaDTO& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_SeriesMediaDTO_HPP
