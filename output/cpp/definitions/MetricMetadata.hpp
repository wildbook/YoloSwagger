#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataAlert.hpp"
#include "MetricPriority.hpp"
#include "MetricDataType.hpp"
#include "MetricMetadataNotify.hpp"
#include "AggregationType.hpp"
#include "MetricType.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    std::string info;
    std::vector<MetricMetadataAlert_t> alerts;
    uint32_t period;
    uint32_t sample_window_ms;
    std::string pretty_name;
    std::string units;
    std::string category;
    AggregationType_t transientAggregation;
    std::string destination;
    MetricPriority_t priority;
    MetricType_t type;
    MetricMetadataNotify_t notify;
    std::string description;
    MetricDataType_t data_type;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["info"] = v.info;
    j["alerts"] = v.alerts;
    j["period"] = v.period;
    j["sample_window_ms"] = v.sample_window_ms;
    j["pretty_name"] = v.pretty_name;
    j["units"] = v.units;
    j["category"] = v.category;
    j["transientAggregation"] = v.transientAggregation;
    j["destination"] = v.destination;
    j["priority"] = v.priority;
    j["type"] = v.type;
    j["notify"] = v.notify;
    j["description"] = v.description;
    j["data_type"] = v.data_type;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.info = j.at("info").get<std::string>();
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.period = j.at("period").get<uint32_t>();
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.units = j.at("units").get<std::string>();
    v.category = j.at("category").get<std::string>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
    v.destination = j.at("destination").get<std::string>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.type = j.at("type").get<MetricType_t>();
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.description = j.at("description").get<std::string>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
  }
  inline std::string to_string(const MetricMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
