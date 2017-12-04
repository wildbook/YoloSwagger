#ifndef SWAGGER_TYPES_MetricMetadataAlert_HPP
#define SWAGGER_TYPES_MetricMetadataAlert_HPP
#include <json.hpp>
#include "MetricMetadataNotify.hpp"
namespace leagueapi {
  // 
  struct MetricMetadataAlert {
    // 
    std::string description;
    // 
    std::string info;
    // 
    std::string level;
    // 
    double max;
    // 
    double min;
    // 
    MetricMetadataNotify notify;
    // 
    std::string pretty_name;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadataAlert& v) {
    j["description"] = v.description;
    j["info"] = v.info;
    j["level"] = v.level;
    j["max"] = v.max;
    j["min"] = v.min;
    j["notify"] = v.notify;
    j["pretty_name"] = v.pretty_name;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadataAlert& v) {
    v.description = j.at("description").get<std::string>;
    v.info = j.at("info").get<std::string>;
    v.level = j.at("level").get<std::string>;
    v.max = j.at("max").get<double>;
    v.min = j.at("min").get<double>;
    v.notify = j.at("notify").get<MetricMetadataNotify>;
    v.pretty_name = j.at("pretty_name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_MetricMetadataAlert_HPP
