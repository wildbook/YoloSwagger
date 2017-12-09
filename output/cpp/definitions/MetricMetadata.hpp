#pragma once
#include <json.hpp>
#include <optional>
#include "MetricMetadataNotify.hpp"
#include "MetricPriority.hpp"
#include "MetricMetadataAlert.hpp"
#include "MetricType.hpp"
#include "AggregationType.hpp"
#include "MetricDataType.hpp"
namespace leagueapi {
  struct MetricMetadata_t {
    MetricMetadataNotify_t notify;
    uint32_t period;
    std::string description;
    std::string destination;
    std::string pretty_name;
    std::string category;
    MetricPriority_t priority;
    AggregationType_t transientAggregation;
    std::string info;
    MetricDataType_t data_type;
    uint32_t sample_window_ms;
    std::vector<MetricMetadataAlert_t> alerts;
    std::string units;
    MetricType_t type;
  };

  inline void to_json(nlohmann::json& j, const MetricMetadata_t& v) {
    j["notify"] = v.notify;
    j["period"] = v.period;
    j["description"] = v.description;
    j["destination"] = v.destination;
    j["pretty_name"] = v.pretty_name;
    j["category"] = v.category;
    j["priority"] = v.priority;
    j["transientAggregation"] = v.transientAggregation;
    j["info"] = v.info;
    j["data_type"] = v.data_type;
    j["sample_window_ms"] = v.sample_window_ms;
    j["alerts"] = v.alerts;
    j["units"] = v.units;
    j["type"] = v.type;
  }

  inline void from_json(const nlohmann::json& j, MetricMetadata_t& v) {
    v.notify = j.at("notify").get<MetricMetadataNotify_t>();
    v.period = j.at("period").get<uint32_t>();
    v.description = j.at("description").get<std::string>();
    v.destination = j.at("destination").get<std::string>();
    v.pretty_name = j.at("pretty_name").get<std::string>();
    v.category = j.at("category").get<std::string>();
    v.priority = j.at("priority").get<MetricPriority_t>();
    v.transientAggregation = j.at("transientAggregation").get<AggregationType_t>();
    v.info = j.at("info").get<std::string>();
    v.data_type = j.at("data_type").get<MetricDataType_t>();
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>();
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert_t>>();
    v.units = j.at("units").get<std::string>();
    v.type = j.at("type").get<MetricType_t>();
  }
  inline std::string to_string(const MetricMetadata_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
